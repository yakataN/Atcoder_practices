s = gets.chomp
a = [s[0], s[1], s[2],s[3]]
a.sort!

if a[0] == a[1] and a[1] != a[2] and a[2] == a[3]
    puts "Yes"
else
    puts "No"
end