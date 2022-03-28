#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include<string.h>

int row[8],a,b,lineCounter;

bool kiemtra_dieukien(int r,int c){
	 for(int prev = 0; prev <c;prev++){
		  if(row[prev] == r || (abs(row[prev]-r)==abs(prev-c))){
		   	return false;
		  }
	 }
return true;
}
void quaylui(int c){
	 if(c == 8){
	  	for(int j = 0 ; j < 8;j++){
	  	 	printf("%d ",row[j]+1);
	 	 }
		 printf("\n");
	 }
	 else for(int r = 0; r < 8;r++){
	  		if(kiemtra_dieukien(r,c)){
	   		row[c] = r;
	   			quaylui(c+1);
	  		}
	}
}
int main(){
      memset(row,0,sizeof row);
      lineCounter = 0;
      printf("Vi tri co the dat cac con Hau la:\n");
      quaylui(0);
return 0;
}
