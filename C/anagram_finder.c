#include<stdio.h>
#include<string.h>

int main(){
// utilizing arrays 
  int counter1[] = {0, 0, 0, 0};
  int counter2[] = {0, 0, 0, 0}; 

// utilizing string arrays.
  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";
  
  for(int i = 0; i < strlen(s1); i++){
    
    if(s1[i] == 'a'){
      counter1[0] ++;
    }else if(s1[i] == 'b'){
      counter1[1] ++;
    }else if(s1[i] == 'c'){
      counter1[2] ++;
    }else if(s1[i] == 'd'){
      counter1[3] ++;
    }else{
      continue;
    }
  }
  
  /*
  the asterik(*) before counter1 is used to 
  print out access the first element within counter2
  */
  printf("%d\n", *counter1);

  for(int j = 0; j < strlen(s2); j++){

    if(s2[j] == 'a'){
      counter2[0] ++;
    }else if(s2[j] == 'b'){
      counter2[1] ++;
    }else if(s2[j] == 'c'){
      counter2[2] ++;
    }else if(s2[j] == 'd'){
      counter2[3] ++;
    }else{
      continue;
    }
  }

 /*
 the asterik(*) before counter2 is used to 
 print out access the first element within counter2
 */
 printf("%d\n", *counter2);

 return 0;
}