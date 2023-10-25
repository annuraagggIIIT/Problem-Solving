object DiamondPattern {
  def main(args: Array[String]): Unit = {
    val n = 5 // You can change the value of 'n' for a different size diamond

    // Upper part of the diamond
    for (i <- 1 to n by 2) {
      val spaces = " " * ((n - i) / 2)
      val stars = "*" * i
      println(spaces + stars)
    }

    // Lower part of the diamond
    for (i <- (n - 2) to 1 by -2) {
      val spaces = " " * ((n - i) / 2)
      val stars = "*" * i
      println(spaces + stars)
    }
  }
}
