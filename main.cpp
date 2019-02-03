#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	for (int i =0; i<10; i++){
     std::cout<<i+1<<" ";
    	 if(i == 3) {
         break;
    	 }
 	}
 	std::cout<<std::endl;
 	
 	for (int i =0; i<10; i++){
     if(i %  2 == 1) {
         continue;
     }
     std::cout<<i<<" ";
 }  
 
	return 0;
}
