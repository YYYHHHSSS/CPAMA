//在web服务器字符串domain加上"http://www."及"/index.html"
void build_index_url(const char *domain, char *index_url)
{
    const char *http = "http://www.";
    const char *index = "/index.html";

    strcat(strcat(strcpy(index_url, http), domain), index);
}

