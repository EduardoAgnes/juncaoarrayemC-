#include <iostream>

using namespace std;

class vetor{

    int i;

    int vet0[6];
    int vet1[6];
    int vet2[12];
 
    public:
        junto(int vet[6]);
};

int vetor::junto(int vet[6]){



    for (i = 0 ; i < 6; i++){


        cout << "Digite o valor do primeira array na posicao : " << i << endl;
        cin >> vet0[i];
}
    for (i = 0 ; i < 6 ; i++){

        cout << "Digite o valor do segunda array na posicao : " << i << endl;
        cin >> vet1[i];
}

    for (i = 0;i < 6; i++){
    vet2[i] = vet0[i];
}
        for (i = 0; i < 12; i++){
        vet2[i] = vet1[i-6];
}

        for ( i = 0; i < 12 ; i++){
            cout << vet2[i] << endl;

            }
}
int main(){

    int vet[6];

    vetor Posi;
    Posi.junto(vet);
}
