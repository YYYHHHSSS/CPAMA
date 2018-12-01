// 将file_name指向的文件名后缀，复制到extension中，如果无后缀，则复制“”
void get_extension(const char *file_name, char *extension)
{
    while (*file_name != '\0') {
        if (*file_name++ == '.') {
            strcpy(extension, file_name);
            break;
        }
    }
    if (strlen(file_name) == 0)
        srtcpy(extension, "");
}

