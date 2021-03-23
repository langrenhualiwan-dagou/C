#include<stdio.h>
#include<string.h>
size_t mylen(const char* s){
	int idex = 0;
	while (s[idex] != '\0'){
		idex++;
	}
	return idex;
}
int main(void){
	char line[] = "Hello";
	printf("strlen=%lu\n", strlen(line));
	printf("mylen=%lu\n", mylen(line));
	printf("sizeof=%lu\n", sizeof(line));
    return 0;
}
#include<stdio.h>
#include<string.h>
int mycmp(char* s1,char* s2){
	int index = 0;
	while (s1[index]==s2[index]&&s1[index]!='\0'){
		index++;
	}
	return s1[index] - s2[index];
}
int main(void){
	char a[] = "abc";
	char b[] = "abc ";
	printf("%d\n", strcmp(a, b));
	printf("%d\n", mycmp(a, b));

	return 0;
}


#include<stdio.h>
#include<string.h>
char* mycpy (char* dust,const char* src){
	char* ret = dust;
	while (*dust++ = *src++)
		;
	*dust = '\0';
	return ret;


}
int main(void){
	char a[] = "abc";
	char b[] = "abc";
	strcpy(a, b);
	printf("%s\n", a);
	mycpy(a, b);
	printf("%s\n", a);


	return 0;
}




#include<stdio.h>
#include<string.h>
int main(){
	char s1[10] = "abc";
	char s2[]= "def";
	strcat(s1, s2);
	printf("%s\n", s1);

	return 0;
}   