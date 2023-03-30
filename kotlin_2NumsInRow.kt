fun main() {
    // write your code here
    val list = MutableList(readln().toInt()) { readln().toInt() }.joinToString(" ")
    val pm = readln()

    val nextToEachOther = list.contains(pm) || list.contains(pm.reversed())

    println(if (nextToEachOther) "NO" else "YES")

}
