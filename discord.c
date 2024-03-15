#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

void type(char* url,char* token){
  char curl[512];  
  snprintf(curl, sizeof(curl), "curl %s -X POST -H 'Authorization: %s'", url, token);
  system(curl);
}

int main(void){
        char token[100];
        char url[100];

        printf("Welcome to my discord typing spoofer\nWith this program can make it look like your typing forever\nWARNING USING THIS COULD GET YOUR DISCORD ACCOUNT TERMINATED USE AN ALT AND VPN\n\n");

        printf("Typing api url: ");scanf("%s", url);
        printf("Authorization:  ");scanf("%s", token);

	printf("\nTyping....");

	while(true){
		sleep(1);
        	type(url,token);
	}
}

