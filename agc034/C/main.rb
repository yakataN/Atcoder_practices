n, x = gets.chomp.split.map(&:to_i)

ary = []
n.times do
    ary << gets.chomp.split.map(&:to_i)
end

point = []
y = 0
ary.each do |item|
    b = item[0]
    l = item[1]
    u = item[2]
    y += b * l

    point << x * u - y
end
point.sort!.reverse!

i = 0
while (true)
    point[i] -= 