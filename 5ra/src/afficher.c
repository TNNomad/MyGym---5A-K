#include<stdio.h>
#include"afficher.h"
#include<stdlib.h>
#include<string.h>

void afficher()
{
	FILE*f;
	char login[20]; char password[20];
	int role;
	f=fopen("users.txt","r");
	if(f !=NULL) {
	while(fscanf(f,"%s %s %d \n",login,password,&role)!=EOF){
	printf("%s",login);}
	fclose(f);
	}
	else printf("impossible d'ouvrir le fichier");
	return 0;
}
