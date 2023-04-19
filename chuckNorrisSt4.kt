fun main() {
    println("Input encoded string:")
    val input = readln().trim()

    // Split blocks of zeroes and group by two
    val zeroGroups = input.trim().split(" ").chunked(2)

    var binaryStringList = mutableListOf<String>()

    for (element in zeroGroups) {
        if (element[0] == "0") {
            repeat(element[1].length) {
                binaryStringList.add("1")
            }
        } else {
            repeat(element[1].length) {
                binaryStringList.add("0")
            }
        }
    }
    val binaryString = binaryStringList.joinToString("")

    println("The result:")
    println(binaryToString(binaryString))

}

fun binaryToString(binary: String): String {
    val chunks = binary.chunked(7) // split binary into groups of 7 bits
    return chunks.map { it.toInt(2).toChar() }.joinToString("") // convert each group to a character and join them
}
