#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define MAX 100 
using namespace std;

std::vector<string> v;

bool visitado[ MAX ][ MAX ]; 
int dx[ 4 ] = {0, 0, 1, -1 }; 
int dy[ 4 ] = {1, -1, 0, 0 };
int h , w; 
struct Estado{
int x; 
int y; 
int d; 
Estado(int x1 , int y1 , int d1) : x(x1), y(y1), d(d1){} 
Estado(){}
};
Estado prev[ MAX ][ MAX ]; //Arreglo para mostrar la ruta que se siguio
//Funcion para imprimir la ruta encontrada //Ingresan las coordenadas del nodo final
void print( int x , int y ){
	for( int i = x , j = y ; prev[ i ][ j ].d != -1 ; i = prev[ x ][ y ].x , j = prev[ x ][ y ].y ){
		v[ i ][ j ] = '*'; x = i; y = j;
	}
	printf("Camino con menor numero de pasos\n" );
	for( int i = 0 ; i < h ; ++i ){
		for( int j = 0 ; j < w ; ++j ){
			printf("%c" , v[ i ][ j ] );
	}
	printf("\n");
	}
}
int BFS( int x , int y , int h , int w ){
	Estado inicial( x , y , 0 ) ;
	queue<Estado> Q; 
	Q.push( inicial ); 
	memset( visitado , false , sizeof( visitado ) );
	prev[ x ][ y ] = Estado( -1 , -1 , -1 ); 
	while( !Q.empty() ){
		Estado actual = Q.front(); 	
		Q.pop(); 
		if( v[actual.x][actual.y]== 'S'){
			print( actual.x , actual.y ); 
			return actual.d; 
		}
		visitado[actual.x][actual.y]=true; 
			for( int i = 0; i < 4; ++i ){ 
			int nx = dx[ i ] + actual.x; 
			int ny = dy[ i ] + actual.y;	
				if( nx >= 1 && nx < h && ny >= 1 && ny < w && v[nx][ny] != ' ' && !visitado[nx][ny] ){
				Estado adyacente( nx , ny , actual.d + 1 ); 
				Q.push( adyacente ); 
				prev[ nx ][ ny ] = actual; 
			}
		}
	}
	return -1;
}
int main(){
	input;
	int t;
	cin>>t;
	while(t--){
		int x , y,a,b;
			scanf("%d" , &h );h+=2;
			scanf("%d\n" , &w );w+=2;
			cout<<h<<endl;
			v.clear();
			for( int i = 0 ; i < h+2 ; ++i ){
				string cad;
				std::getline (std::cin,cad);
				cout<<cad<<endl;
				v.push_back(cad);
			}
			scanf("%d" , &x );
			scanf("%d" , &y );
			scanf("%d" , &a );
			scanf("%d\n" , &b );
			/*v[a+2][b+2]='S';
			int min = BFS( x , y , h , w );
			if( min != -1 )
				 printf("Menor numero de pasos: %d\n" , min );
			else
				 puts("No se pudo llegar al destino");*/
	}
	
return 0; 
}