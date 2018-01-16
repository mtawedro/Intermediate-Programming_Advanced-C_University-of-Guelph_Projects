clear
echo "Starting testing..."
echo ""
echo "For all the following tests, success will be when nothing is returned"
echo ""
echo "Running first test... (on success = 1 mark)"
./reversePoem < testA.txt > outputA.txt; diff outputA.txt solnA.txt
echo ""
echo "Running second test... (on success = 1 mark)"
./reversePoem < testB.txt > outputB.txt; diff outputB.txt solnB.txt
echo ""
echo "Running third test... (on success = 1 mark)"
./reversePoem < testC.txt > outputC.txt; diff outputC.txt solnC.txt
echo ""
echo "...Finished testing (total possible marks = 2)"
echo "Grade = up to 3 marks for passed tests and minus 1 for no makefile"
echo ""
