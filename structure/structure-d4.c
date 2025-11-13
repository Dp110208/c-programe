#include<stdio.h>
#include<string.h>
typedef struct players
{
   
    char name[100];
     int age;
      int testmatch;
       int averagerun;

}plr;


int main(){
  plr tamp;
  plr p[5]={{"virat",35,23,540},
{"Dhoni",35,23,585},
{"Rohit",35,23,510},
{"shubhman",35,23,410},
{"shikhar",35,23,430}
  };
  for(int i=0;i<5;i++){
    for(int j=i;j<4;j++){
      if(p[i].averagerun<p[j+1].averagerun){
       tamp= p[i];
        p[i]=p[j+1];
        p[j+1]=tamp;
      }
    
    }
    printf("%s %d %d %d\n",p[i].name,p[i].age,p[i].testmatch,p[i].averagerun);
  }
    return 0;
}
