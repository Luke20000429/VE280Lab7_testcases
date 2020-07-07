make memcheck
mkdir outputs

./test_1.out > ./outputs/test_1.out
./test_2.out > ./outputs/test_2.out
./test_3.out > ./outputs/test_3.out
./test_4.out > ./outputs/test_4.out
./test_5.out > ./outputs/test_5.out

dos2unix ./outputs/*.out ./outputs/*.ans

diff ./outputs/test_1.out ./outputs/test_1.ans
diff ./outputs/test_2.out ./outputs/test_2.ans
diff ./outputs/test_3.out ./outputs/test_3.ans
diff ./outputs/test_4.out ./outputs/test_4.ans
diff ./outputs/test_5.out ./outputs/test_5.ans

rm -rf ./outputs/*.out
make clean