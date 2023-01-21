int main(void) {

	int res;
	double* q;
	
	res=divisione(1.0,2.0,&q);
	res=divisione(2.0,2.0,&q);
	res=divisione(4.0,2.0,&q);
	res=divisione(1.0,0.0,&q);
	res=divisione(5.0,2.0,&q);

	return 0;
}