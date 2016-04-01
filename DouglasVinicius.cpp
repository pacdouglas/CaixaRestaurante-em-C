/*********************************************************** 
* Nome Aluno: Douglas Martins RA: 41045922854  
* Nome Aluno: Vinícius Guilherme de Souza Maion   RA: 44167443821
* Data: 19/03/2013 
* Resumo do problema: Mostrar a quantidade de calorias de uma refeição e seu valor 
************************************************************/ 


#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
main()
{     
      setlocale(LC_ALL, "Portuguese"); //Configurando para aceitar acentos
      system("TITLE Trabalho1 - Douglas Martins RA: 41045922854 / Vinicius Maion RA: 44167443821"); // Titulo
      system("color 17"); // Personalização de cor
      
  //Variáveis Geral e Calorias
  int  PratoP, Sobremesa, Bebida, PratoPC, SobremesaC, BebidaC, CaloriasT;  
  //Variáveis Preços
  float PratoPP, SobremesaP, BebidaP, Desconto, SubTotal, Total, ValorPago, Troco; 
  
        // Prato Principal
        cout << "     _____           _                              _       \n";
        cout << "    |  __ \\         | |                            | |      \n";
        cout << "    | |__) |___  ___| |_ __ _ _   _ _ __ __ _ _ __ | |_ ___ \n";
        cout << "    |  _  // _ \\/ __| __/ _` | | | | '__/ _` | '_ \\| __/ _ \\\n";
        cout << "    | | \\ \\  __/\\__ \\ || (_| | |_| | | | (_| | | | | ||  __/\n";
        cout << "    |_|  \\_\\___||___/\\__\\__,_|\\__,_|_|  \\__,_|_| |_|\\__\\___|\n\n";
        cout << "================================================";
        cout << "\n\n Escolha o Prato Principal: \n\n 1 - Vegetariano        R$12,50 \n 2 - Peixe              R$18,00 \n 3 - Frango             R$14,50  \n 4 - Carne              R$25,50\n 5 - Nenhum Prato Principal\n\n";        
        cout << "================================================\n\n";
        cout << " Dados Caloricos: \n 1 - 180cal / 2 - 230cal / 3 - 250cal / 4 - 350cal\n";
        cout << "\nDigite a opção escolhida e tecle Enter para confirmar: ";
        cin >> PratoP;
        while (PratoP !=1 && PratoP !=2 && PratoP !=3 && PratoP !=4 && PratoP !=5)
        {
              cout << "\n\n Digite apenas valores válidos!\n1 - Vegetariano\n2 - Peixe\n3 - Frango\n4 - Carne\n5 - Nenhum Prato Principal\n";
              cin >> PratoP;
              }
        if (PratoP==1)
{
        PratoPC = 180;
        PratoPP = 12.50;
        }
        if (PratoP==2)
{
        PratoPC = 230;
        PratoPP = 18;
        } 
        if (PratoP==3)
{
        PratoPC = 250;
        PratoPP = 14.50;
        } 
        if (PratoP==4)
{
        PratoPC = 350;
        PratoPP = 25.50;
        }
        if (PratoP==5)
{
        PratoPC = 0;
        PratoPP = 0;
        }
         system("cls");
         
        //Escolhendo a Sobremesa
        cout << "     _____           _                              _       \n";
        cout << "    |  __ \\         | |                            | |      \n";
        cout << "    | |__) |___  ___| |_ __ _ _   _ _ __ __ _ _ __ | |_ ___ \n";
        cout << "    |  _  // _ \\/ __| __/ _` | | | | '__/ _` | '_ \\| __/ _ \\\n";
        cout << "    | | \\ \\  __/\\__ \\ || (_| | |_| | | | (_| | | | | ||  __/\n";
        cout << "    |_|  \\_\\___||___/\\__\\__,_|\\__,_|_|  \\__,_|_| |_|\\__\\___|\n\n";
        cout << "================================================";
        cout << "\n\n Escolha a Sobremesa: \n\n 1 - Abacaxi            R$2,50 \n 2 - Sorvete Diet       R$6,00 \n 3 - Mousse Diet        R$6,50 \n 4 - Pudim              R$4,00 \n 5 - Nenhuma Sobremesa\n\n";
        cout << "================================================\n\n";
        cout << " Dados Caloricos: \n 1 - 75cal / 2 - 110cal / 3 - 170cal / 4 - 200cal\n";
        cout << "\nDigite a opção escolhida e tecle Enter para confirmar: ";
        cin >> Sobremesa;
        while (Sobremesa !=1 && Sobremesa !=2 && Sobremesa !=3 && Sobremesa !=4 && Sobremesa !=5)
        {
              cout << "\n\n Digite apenas valores válidos!\n1 - Abacaxi\n2 - Sorvete Diet\n3 - Mousse Diet\n4 - Pudim\n5 - Nenhuma Sobremesa\n";
              cin >> Sobremesa;
              }
        if (Sobremesa==1)
{
        SobremesaC = 75;
        SobremesaP = 2.50;
        }
        if (Sobremesa==2)
{
        SobremesaC = 110;
        SobremesaP = 6;
        } 
        if (Sobremesa==3)
{
        SobremesaC = 170;
        SobremesaP = 6.50;
        } 
        if (Sobremesa==4)
{
        SobremesaC = 200;
        SobremesaP = 4;
        }
        if (Sobremesa==5)
{
        SobremesaC = 0;
        SobremesaP = 0;
        }
        system("cls");
        
        //Escolhendo a Bebida
        cout << "     _____           _                              _       \n";
        cout << "    |  __ \\         | |                            | |      \n";
        cout << "    | |__) |___  ___| |_ __ _ _   _ _ __ __ _ _ __ | |_ ___ \n";
        cout << "    |  _  // _ \\/ __| __/ _` | | | | '__/ _` | '_ \\| __/ _ \\\n";
        cout << "    | | \\ \\  __/\\__ \\ || (_| | |_| | | | (_| | | | | ||  __/\n";
        cout << "    |_|  \\_\\___||___/\\__\\__,_|\\__,_|_|  \\__,_|_| |_|\\__\\___|\n\n";
        cout << "================================================";
        cout << "\n\n Escolha a Bebida: \n\n 1 - Chá                R$2,00\n 2 - Suco de Laranja    R$3,50\n 3 - Suco de Melão      R$3,50\n 4 - Refrigerante Diet  R$2,50 \n 5 - Nenhuma Bebida \n\n";
        cout << "================================================\n\n";
        cout << " Dados Caloricos: \n 1 - 20cal / 2 - 70cal / 3 - 100cal / 4 - 65cal\n";
        cout << "\nDigite a opção escolhida e tecle Enter para confirmar: ";
        cin >> Bebida;
        while (Bebida !=1 && Bebida !=2 && Bebida !=3 && Bebida !=4 && Bebida !=5) 
        {
              cout << "\n\n Digite apenas valores válidos!\n1 - Chá\n2 - Suco de Laranja\n3 - Suco de Melão\n4 - Refrigerante Diet\n5 - Nenhuma Bebida \n";
              cin >> Bebida;
              }
        if (Bebida==1)
{
        BebidaC = 20;
        BebidaP = 2;
        }
        if (Bebida==2)
{
        BebidaC = 70;
        BebidaP = 3.50;
        } 
        if (Bebida==3)
{
        BebidaC = 100;
        BebidaP = 3.50;
        } 
        if (Bebida==4)
{
        BebidaC = 65;
        BebidaP = 2.50;
        }
        if (Bebida==5)
{
        BebidaC = 0;
        BebidaP = 0;
        }
        
        system("cls");
      
      //Somando as Calorias Totais e os Preços
      CaloriasT = PratoPC + SobremesaC + BebidaC; 
      SubTotal = PratoPP + SobremesaP + BebidaP;
      
      //Calculando desconto e Mostrando o Valor Total Final
      //Valores para Calorias entre 200 e 350
      
                   if (CaloriasT >= 200 && CaloriasT <=350 || CaloriasT <= 200)
                   {
      Desconto = SubTotal * 15 / 100;
      Total = SubTotal - Desconto;
      cout << "     _____           _                              _       \n";
        cout << "    |  __ \\         | |                            | |      \n";
        cout << "    | |__) |___  ___| |_ __ _ _   _ _ __ __ _ _ __ | |_ ___ \n";
        cout << "    |  _  // _ \\/ __| __/ _` | | | | '__/ _` | '_ \\| __/ _ \\\n";
        cout << "    | | \\ \\  __/\\__ \\ || (_| | |_| | | | (_| | | | | ||  __/\n";
        cout << "    |_|  \\_\\___||___/\\__\\__,_|\\__,_|_|  \\__,_|_| |_|\\__\\___|\n\n";
      cout << "================================================";
      cout << "\n\nEntenda o desconto de acordo com o valor calórico da refeição:\n De     Até     Desconto";
      cout << "\n 200    350     15%" << "\n 351    550     10%" << "\n 551    600     5%" << "\n\n>601 - Sem Desconto" ;
      cout << "\n\n================================================"; 
      cout << "\n\nO Valor de calorias da refeição foi de: " << CaloriasT;
      cout.precision(2);
      cout << setiosflags (ios::fixed);
      cout << "\n\n SubTotal: R$" << SubTotal;
      cout << "\n Desconto: R$" << Desconto;
      cout << "\n\n    Total a pagar: R$" << Total;
      cout << "\n  Valor pago: R$ ";
      cin >> ValorPago;
      while (ValorPago < Total)
            {
                       cout << "\nValor menor que o total!\n Tente novamente.\n\n  Valor Pago: R$";
                       cin >> ValorPago;
                       }
      Troco = ValorPago - Total;
      cout << "\n Troco: R$ " << Troco << "\n\n";
      cout << "Obrigado e volte sempre!\n\n";
      }
      
      //Valores para Calorias entre 351 e 550
                    if (CaloriasT >= 351 && CaloriasT <=550)
                    {
      Desconto = SubTotal * 10 / 100;
      Total = SubTotal - Desconto;
        cout << "     _____           _                              _       \n";
        cout << "    |  __ \\         | |                            | |      \n";
        cout << "    | |__) |___  ___| |_ __ _ _   _ _ __ __ _ _ __ | |_ ___ \n";
        cout << "    |  _  // _ \\/ __| __/ _` | | | | '__/ _` | '_ \\| __/ _ \\\n";
        cout << "    | | \\ \\  __/\\__ \\ || (_| | |_| | | | (_| | | | | ||  __/\n";
        cout << "    |_|  \\_\\___||___/\\__\\__,_|\\__,_|_|  \\__,_|_| |_|\\__\\___|\n\n";
      cout << "================================================";
      cout << "\n\nEntenda o desconto de acordo com o valor calórico da refeição:\n De     Até     Desconto";
      cout << "\n 200    350     15%" << "\n 351    550     10%" << "\n 551    600     5%" << "\n\n>601 - Sem Desconto" ;
      cout << "\n\n================================================";
      cout << "\n\nO Valor de calorias da refeição foi de: " << CaloriasT;
      cout.precision(2);
      cout << setiosflags (ios::fixed);
      cout << "\n\n SubTotal: R$" << SubTotal;
      cout << "\n Desconto: R$" << Desconto;
      cout << "\n\n    Total a pagar: R$" << Total;
      cout << "\n  Valor pago: R$ ";
      cin >> ValorPago;
      while (ValorPago < Total)
            {
                       cout << "\nValor menor que o total!\n Tente novamente.\n\n  Valor Pago: R$";
                       cin >> ValorPago;
                       }
      Troco = ValorPago - Total;
      cout << "\n Troco: R$ " << Troco << "\n\n";
      cout << "Obrigado e volte sempre!\n\n";
      }
      //Valores para Calorias entre 551 e 600)
                    if (CaloriasT >= 551 && CaloriasT <=600)
                    {
      Desconto = SubTotal * 5 / 100;
      Total = SubTotal - Desconto;
      cout << "     _____           _                              _       \n";
        cout << "    |  __ \\         | |                            | |      \n";
        cout << "    | |__) |___  ___| |_ __ _ _   _ _ __ __ _ _ __ | |_ ___ \n";
        cout << "    |  _  // _ \\/ __| __/ _` | | | | '__/ _` | '_ \\| __/ _ \\\n";
        cout << "    | | \\ \\  __/\\__ \\ || (_| | |_| | | | (_| | | | | ||  __/\n";
        cout << "    |_|  \\_\\___||___/\\__\\__,_|\\__,_|_|  \\__,_|_| |_|\\__\\___|\n\n";
      cout << "================================================";
      cout << "\n\nEntenda o desconto de acordo com o valor calórico da refeição:\n De     Até     Desconto";
      cout << "\n 200    350     15%" << "\n 351    550     10%" << "\n 551    600     5%" << "\n\n>601 - Sem Desconto" ;
      cout << "\n\n================================================";
      cout << "\n\nO Valor de calorias da refeição foi de: " << CaloriasT;
      cout.precision(2);
      cout << setiosflags (ios::fixed);
      cout << "\n\n SubTotal: R$" << SubTotal;
      cout << "\n Desconto: R$" << Desconto;
      cout << "\n\n    Total a pagar: R$" << Total;
      cout << "\n  Valor pago: R$ ";
      cin >> ValorPago;
      while (ValorPago < Total)
            {
                       cout << "\nValor menor que o total!\n Tente novamente.\n\n  Valor Pago: R$";
                       cin >> ValorPago;
                       }
      Troco = ValorPago - Total;
      cout << "\n Troco: R$ " << Troco << "\n\n";
      cout << "Obrigado e volte sempre!\n\n";
      }
      
      //Valores para Calorias maiores que 600
                if (CaloriasT >= 601)
                {
      Desconto = 0;
      Total = SubTotal;
        cout << "     _____           _                              _       \n";
        cout << "    |  __ \\         | |                            | |      \n";
        cout << "    | |__) |___  ___| |_ __ _ _   _ _ __ __ _ _ __ | |_ ___ \n";
        cout << "    |  _  // _ \\/ __| __/ _` | | | | '__/ _` | '_ \\| __/ _ \\\n";
        cout << "    | | \\ \\  __/\\__ \\ || (_| | |_| | | | (_| | | | | ||  __/\n";
        cout << "    |_|  \\_\\___||___/\\__\\__,_|\\__,_|_|  \\__,_|_| |_|\\__\\___|\n\n";
      cout << "================================================";
      cout << "\n\nEntenda o desconto de acordo com o valor calórico da refeição:\n De     Até     Desconto";
      cout << "\n 200    350     15%" << "\n 351    550     10%" << "\n 551    600     5%" << "\n\n>601 - Sem Desconto" ;
      cout << "\n\n================================================";
      cout << "\n\nO Valor de calorias da refeição foi de: " << CaloriasT;
      cout.precision(2);
      cout << setiosflags (ios::fixed);
      cout << "\n\n SubTotal: R$" << SubTotal;
      cout << "\n Desconto: R$" << Desconto;
      cout << "\n\n    Total a pagar: R$" << Total; 
      cout << "\n  Valor pago: R$ ";
      cin >> ValorPago;
      while (ValorPago < Total)
            {
                       cout << "\nValor menor que o total!\n Tente novamente.\n\n  Valor Pago: R$";
                       cin >> ValorPago;
                       }
      Troco = ValorPago - Total;
      cout << "\n Troco: R$ " << Troco << "\n\n";
      cout << "Obrigado e volte sempre!\n\n";
      }
      
getch();
}
