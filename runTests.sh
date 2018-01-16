clear
echo "Starting testing..."
echo ""
echo "Running make clean..."
make clean
echo ""
echo "Running make... (on success = 1 mark)"
make
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
echo "...Finished testing (total possible marks = 4)"
