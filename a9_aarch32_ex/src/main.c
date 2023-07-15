/*
 * author water cutter
 * */
#include <stdlib.h>

unsigned int* ptrs[32] = {0};

unsigned int allocByteNum = 32;
void main_app(){

	ptrs[0] = (unsigned int*)malloc(allocByteNum);
	ptrs[1] = (unsigned int*)malloc(allocByteNum);
	ptrs[2] = (unsigned int*)malloc(allocByteNum);
	free(ptrs[2]);
	ptrs[3] = (unsigned int*)malloc(allocByteNum);
	while(1){
    	;
    }
}
void irq_app(unsigned int intc_id){

}




