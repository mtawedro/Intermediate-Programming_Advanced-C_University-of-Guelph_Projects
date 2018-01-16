/*


	//List *num1 = malloc(sizeof());

	

	/*calls createBook function
	*@ param book title 
	*@param book price
	*@return a dynamically created game board.
 	*/
	boardGame *game1 = createBoard(" Uno", 5.99,"Matta" );
	
	boardGame *game2 = createBoard("Trouble", 14.99, "Hasbro");
	
	
	//intalizes gameptr to address of printboard function()
	void(*gamePtr)(void *);
	
	gamePtr = &printBoardGame1;
	
	//intalizes bookptr to address of printbook function()
	void(*bkPtr)(void*);
	
	bkPtr = &printBook;
	


	
	/*calls createStore function
	*@ param book1, bkPtr 
	*@param book2, bkPtr
	* @return a dynamically created store with data.
 	*/
	Store *Store1 = createStore(book1, bkPtr);
	Store *Store2 = createStore(book2, bkPtr);
	Store *Store3 = craeteStore(book3, bkPtr); 
	
	/*calls createStore function
	*@ param game1, gamePtr 
	*@param game2, game ptr
	* @return a dynamically created store with data.
 	*/
	Store *Store4 = createStore(game1, gamePtr); 
	Store *Store5 = createStore(game2, gamePtr); 
	
	
	displayStore(Store1);
	
	displayStore(Store2);
	
	displayStore(Store3);
	
	displayStore(Store4);

	displayStore(Store5);
	
	*/
	
	return 0;
	