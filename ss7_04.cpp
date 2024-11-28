#include <stdio.h>

int main() {
    int n;

    
    printf("Nhap so phan tu cua mang: ");
    
	scanf("%d", &n);
    int arr[n]; 
 

    
    printf("Nhap %d phan tu cho mang:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    
}