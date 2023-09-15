#include "curl/curl.h"
#include "stdlib.h"

size_t write_out(char *ptr, size_t size, size_t nmemb, void *userdata) {
    FILE *file = (FILE *) userdata;
    return fwrite(ptr, size, nmemb, file);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Invalid argument count\n");
        return 1;
    }

    curl_global_init(CURL_GLOBAL_ALL);
    CURL *curly = curl_easy_init();
    CURLcode res;

    FILE *f = fopen(argv[1], "wb");

    curl_easy_setopt(curly, CURLOPT_URL, "https://example.com");
    curl_easy_setopt(curly, CURLOPT_WRITEFUNCTION, write_out);
    curl_easy_setopt(curly, CURLOPT_WRITEDATA, f);
    res = curl_easy_perform(curly);

    if (res != CURLE_OK) {
        fprintf(stderr, "Error: %s\n", curl_easy_strerror(res));
    }

    fclose(f);

    return 0;
}