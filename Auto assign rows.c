#include <stdio.h>

int main(void) {
	int r, c, arr[][3] = {1,2,3,4,5,6,7,8,90,33,234,23,76,789,78,0,98,657};
	for(r=0;r<sizeof(arr)/12;r++){
	    for(c=0;c<3;c++)
	    printf("%4d\t",arr[r][c]);
	    printf("\n");
	}
	return 0;
}

