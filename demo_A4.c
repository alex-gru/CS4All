int main(){

  int i;
  int procID;
  int lockstatus;

	initLibrary();

	i = 33;

	println();
	printInteger(i);
	println();

	//procID = getpid();

	//println();
	//print((int*) "getpid result: ");
	//printInteger(procID);
	//println();
	
	//lockstatus = 0;

	//while (lockstatus != 1) {
	//	lockstatus = lock(procID);
	//	if (lockstatus == 1) {
	//		print((int*) "YES, I got the lock!!");
	//		println();
	//	}
	//	else {
	//		print((int*) "Damn, I have to wait!");
	//		println();
	//	}
	//	println();
	//	sched_yield();
		// [EIFLES] re-check if I got the lock --> improves mutual exclusion level
	//	lockstatus = lock(procID);
	//}

// That's our critical section

	//unlock(procID);
	return 1;
}
