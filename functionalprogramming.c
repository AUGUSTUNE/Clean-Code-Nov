bool startsWithB(const char *str) {
    if (str == NULL) {
        return false;
    }
    return str[0] == 'b';
}

bool endsWithB(const char *str) {
    if (str == NULL || strlen(str) == 0) {
        return false;
    }
    return str[strlen(str) - 1] == 'b';
}
int fliterString(char *names[], int arrayLength, bool (*predicate) (const char*), char *result[], int maxResults) {
    int count = 0;
    for (int i = 0; i < arrayLength; i++) {
        // Compare the first char of the names with the given alphabet
        if(prdicte(names[i])) {
            if (count < maxResults) {
                result[count] = names[i];
                count++;
            }
        }
    }
    return count;
}
