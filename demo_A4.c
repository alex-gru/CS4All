int main(){

  int i;
  int procID;
  int lockstatus;

	initLibrary();

	procID = getpid();
	println();
	print((int*) "getpid result: ");
	printInteger(procID);
	println();
	lockstatus = -1;

	while (lockstatus != 0) {
		lockstatus = lock(procID);
		if (lockstatus == 0) {
			println();
			print((int*) "YES, I got the lock!!");
			println();
		}
		else {
			println();
			print((int*) "Damn, I have to wait!");
			println();
		}
		sched_yield();
	}
	//while(i < 5) {
		//println();
		//print((int*) "getpid result: ");
		//printInteger(procID);
		//sched_yield();
		//println();
		//i = i + 1;
	//}
	unlock(procID);
	return 1;
}
