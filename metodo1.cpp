		
		
		#include <iostream>
		using namespace std;
	
		class uniao{	
		int numero ,i ;
		int resultado ;
		public:
	
		uniao2(int vettt);
		 MeuNumeroUm(int o);
		 int valor1 [6];
		 int valor2 [6];
		 int valor3 [12];
			
	};
	
		uniao::MeuNumeroUm (int v){
		numero = resultado;
		cout <<"Digite o valor ";
   		
    
		for (i=0;i<6;i++){
		cout <<"digite os valores1 <<" << endl;
		cin  >> valor1 [i] ;
	 }
  		for (i=0;i<6;i++){
		cout <<"digite os valores2 <<" << endl;
		cin  >> valor2 [i] ;
 }
 
		for(i=0;i<6;i++){
		valor3[i]=valor1[i];
}
		for(i=6;i<12;i++){
			valor3[i]=valor2[i-6];
		}
		for(i=0;i<12;i++){
			cout<<valor3[ i]<<" ";
		}
		 }
			int main(){
			int i,v[6];
			uniao resultado ;
			resultado.valor1(v);
			
			return 0;
			}
	
