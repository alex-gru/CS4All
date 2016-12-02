int main(){

  int i;

	initLibrary();

	i = getpid();
	//while(i < 5) {
		println();
		print((int*) "getpid result: ");
		printInteger(i);
		//sched_yield();
		println();
		//i = i + 1;
	//}
	return 1;
}
