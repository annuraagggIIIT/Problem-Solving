def print_diamond(n)
  # Upper part of the diamond
  (1..n).step(2) do |i|
    spaces = ' ' * ((n - i) / 2)
    stars = '*' * i
    puts spaces + stars
  end

  # Lower part of the diamond
  (n - 2).step(1, -2) do |i|
    spaces = ' ' * ((n - i) / 2)
    stars = '*' * i
    puts spaces + stars
  end
end

# You can change the value of 'n' for a different size diamond
print_diamond(5)
