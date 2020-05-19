#include <bits/stdc++.h>

using namespace std;

int main()
{
    int compras, volumedc, inadim, atraso, form, total;
    double ticket;
    string Pagamento;
    cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "INFORME SEUS DADOS DO ULTIMO ANO" << endl;

    cout << "Quantas compras o cliente fez no ultimo ano?";
    cin >> compras;
    cout << "Qual o ticket medio?";
    cin >> ticket;

    cout << "Quantas vezes o cliente atrasou o pagamento?";
    cin >> atraso;
    cout << "A maioria das compras foi em dinheiro, cartao ou boleto (D/C/B)?";
    cin >> Pagamento;

    if(compras==0 && ticket == 0){
        volumedc = 0;
    }
    else if(compras<=2 && ticket >0 && ticket<= 3000 ){
        volumedc=20;
    }
    else if(compras>2 && ticket >0 && ticket<= 3000 ){
        volumedc=40;
    }
    else if(ticket> 3000 ){
        volumedc=60;
    }
    cout << "Score de volume de compras = " << volumedc << " pontos" << endl;

    if(atraso>1 || compras==0){
        inadim=0;
    }
    else if(compras>0 && atraso == 1){
        inadim=15;
    }
    else if(compras>0 && atraso == 0){
        inadim=30;
    }

    if (Pagamento=="D"){
        form=5;
    }
    else{
        form=10;
    }

    cout << "Score de inadimplencia = " << inadim << " pontos" << endl;
    cout << "Score de forma de pagamento = " << form << " pontos" << endl;



}
