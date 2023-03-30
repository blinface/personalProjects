package chucknorris

fun main() {
    println("Input string:")
    val input = readln()
    //initializing empty mutable list of type String
    var binaryList = mutableListOf<String>()

    //converting each element (character) of input string to binary and adding padding of 0's to the beginning
    //padStart = 7 because we need a 7-bit binary number
    //then add binary numbers to the binaryList we created earlier
    for (element in input) {
        binaryList.add(Integer.toBinaryString(element.code).padStart(7, '0'))
    }

    //not most elegant, but I created another variable where we join the elements of list to a single string
    val bin = binaryList.joinToString("")
    //then creating an array that will store the character array of 0's and 1's
    //example 1000011 -> [1, 0000, 11]
    val arr = splitDistinct(bin.toCharArray())

    println("The result:")
    //loop to iterate through indices of the array (example [1, 0000, 11])
    for (i in arr.indices) {
        //if first element of i element of array (in my example it's '1'), we print a new block starting with "0 "
        if (arr[i][0] == '1') {
            print("0 ")
            //then print more 0's based on the length of array
            repeat (arr[i.toInt()].length) {
                print("0")
            }
            print(" ") //printing a space
        //similarly, if first element of i element of array [0000] we print a new block starting with "00 "
        } else if (arr[i][0] == '0') {
            print("00 ")
            repeat (arr[i.toInt()].length) {
                print("0")
            }
            print(" ")
        }
    }

}

//function to break down binary string grouped into elements of 0 and 1
//will transform 1000011 -> [1, 0000, 11]
fun splitDistinct(arr: CharArray): List<String> = arr
        .fold(ArrayList<StringBuilder>()) { acc, ch -> acc.apply {
            if (isEmpty() || last().last() != ch)
                add(StringBuilder(ch.toString()))
            else
                last().append(ch)
        }}
        .map { it.toString() }

