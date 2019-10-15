#include <stdio.h>
#include <curl/curl.h>
int main(void)
{
CURL *curl;
CURlcode res;
curl=curl_ easy_ init();
if(curl){
curl easy_ setopt( curl ,CURLOPT URL,"http://myip. ipip.net/");
res=curl_ easy_ perform(curl);
if(res!=CURLE_ 0K)
fprintf(stderr, "curl easy_ perform() failed:%s\n",
curl_ easy_ strerror(res));
curl_ easy cleanup(curl);
}
return 0;
}
