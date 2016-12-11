int main(){

  int procID;
  int lockstatus;

	initLibrary();

	procID = getpid();
	
	lockstatus = 0;

	while (lockstatus != 1) {
		lockstatus = lock(procID);
		// sched_yield --> let other processes/threads run if "I" did not get the lock!!
		sched_yield();
	}

	println();
	print((int*) "YES, process with ID ");
	printInteger(procID);
	print((int*) " got the lock! Now entering critical section!");
	println();

	// That's our critical section

	println();
	print((int*) "Process with ID ");
	printInteger(procID);
	print((int*) " finished its critical section! Now unlocking!");
	println();

	unlock(procID);
	return 1;
}
