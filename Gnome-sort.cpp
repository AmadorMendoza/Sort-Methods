//Este archivo contiene la logica de "Gnome Sort"
#include<iostream>
#include<list>
using namespace std;

void gnome_sort(int *A);
void intercambio(int *A, int N);

int main(){
    int A[] = {4,7,1,3};
    gnome_sort(A);
    cout << A << endl;
    return 0;
}

void gnome_sort(int *A){
    int i = 0;
    int n = sizeof(A);
    while(n > i){
        if(A[i] >= A[i + 1]){
            int temp = A[i];
            A[i] = A[i + 1];
            A[i + 1] = temp;
            i--;
        }else{
            i++;
        }
    }
}

void intercambio(int *A){
    int N = sizeof(A);
    for(int i=0; i<N; ++i){
        for(int j=i+1; j<N; ++j){
            int temp=A[i];
            if (A[i]>A[j]){
                A[i]=A[j];
                A[j]=temp;
            }
        }
        for(int k=0; k<N; ++k){
        cout << A[k] << " ";
        }
        cout << endl;
    }
}

void buble_sort(int *A){
    int N = sizeof(A);
    for(int j=0; j<N; ++j){
        for(int i=0; i<N-1; ++i){
            int temp=A[i];
            if (A[i]>A[i+1]){
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
        for(int k=0; k<N; ++k){
        cout << A[k] << " ";
        }
        cout << endl;
    }
}


void seleccion(int *A){
    int N = sizeof(A);
    //busca el elemento menor del Arreglo
    for (int n=0; n<N-1; ++n) {
        int pos = n;
        // Encontrar el índice del elemento mínimo
        for (int i=n+1; i<N; ++i) {
            if (A[i]<A[pos]) {
                pos=i;
            }
        }
        // Intercambiar el elemento mínimo encontrado con el elemento en la posición n
        if (pos != n) {
            int temp = A[n];
            A[n] = A[pos];
            A[pos] = temp;
        }
        for (int k = 0; k < N; ++k) {
            cout << A[k] << " ";
        }
        cout << endl;
    }
}


void insercion(int *A){
    int N = sizeof(A);
	int B[N];
	B[0]=A[0];
	for (int j=1; j<N; ++j){
		int temp=A[j];
		int i=j-1;
		while(i>=0 && B[i]>temp){
			B[i+1]=B[i];
			--i;
		}
		B[i+1]=temp;
		for(int k=0; k<=j; ++k){
			cout << B[k] << " ";
    	}
		cout << endl;
	}
}