# juncaoarrayemCmais

Instale o Dev C++;
Sistema Operacional Windows;
Desenvolvido em C++
Autor: Eduardo T. Agnes
Data: 01/12/2021

Criação de uma classe (class vetor) para a declaração de variaveis.

Ação do metodo recebe o parametro:int vetor::junto(int vet[6])

Após, criação de entrada de valores dentro de um 'for' para que preencha todos espaço dos 2 vetores:
 for (i = 0 ; i < 6; i++){


        cout << "Digite o valor do primeira array na posicao : " << i << endl;
        cin >> vet0[i];
}
    for (i = 0 ; i < 6 ; i++){

        cout << "Digite o valor do segunda array na posicao : " << i << endl;
        cin >> vet1[i];
}

Apos, entra em outro for para a junção de vetores:
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
