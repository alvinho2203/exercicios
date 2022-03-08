int main(){

  int num,soma,div,x;
   soma = 0;

    for(num = 5000; num <=7000; num++ ){
    div = 0;
        for(x=num; x>0; x--){
            if(num % x == 0)
				div++;

	}
        if(div == 2){
			 printf("\n Numero primo: %d",num);
			 soma = soma + num;
	}
}

  printf("\n\nA soma dos primos neste intervalo eh: %d\n\n",soma);

return 0;
}
