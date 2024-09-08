
/* THIS CODE FOR UPDATE APT SNAP FLATPAK PACKAGES AND PRO */
/* CREATOR MOHAMMED EBRAHIM */
/* PHONE : 0925302510 */
/* WORNING THIS CODE FOR GNU/LINUX OPERATING SYSTEM */

#include<stdio.h>
#include<stdlib.h>
int main(void){

	system("date");
	printf(" START UPDATE FOR APT PACKAGES.. ! \n");
	system("sudo apt update && sudo apt upgrade");
	
	if("snap && pro"){
	printf(" START UPDATE FOR SNAP AND PRO \n");
	system("sudo snap refresh");
	system("sudo pro refresh");
	}else{
		printf(" your not install snap and pro packages\n");
	}

	if("flatpak"){
	printf(" START UPDATE FLATPAK \n");
	system("sudo flatpak update");
	}else{
		printf(" flatpak not install \n");
	}

	printf(" The last thing remove any old packgase not need \n");
	system("sudo apt-get autoremove && sudo apt-get autoclean");
	printf("\b");
	return 0;
}

