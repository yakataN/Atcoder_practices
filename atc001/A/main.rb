$h, $w = gets.chomp.split.map(&:to_i)

$ary = []
$h.times do |i|
    $ary << gets.chomp
    tmp_s = $ary[i].index("s")
    tmp_g = $ary[i].index("g")
    if (tmp_s)
        $sx = i
        $sy = tmp_s
    end
    if (tmp_g)
        $gx = i
        $gy = tmp_g
    end
end

$memo = Array.new($h) do
    Array.new($w, false)
end

$dx = [0, 1, 0, -1]
$dy = [1, 0, -1, 0]

def dfs(x, y)
    if (x < 0 or y < 0 or x >= $h or y >= $w)
        return
    end
    if ($ary[x][y] == "#")
        return
    end
    if ($memo[x][y])
        return
    end

    $memo[x][y] = true
    # p [x, y]

    for i in 0..3
        dfs(x+$dx[i], y+$dy[i])
    end
    return
end


dfs($sx, $sy)

# p $memo

if $memo[$gx][$gy]
    puts "Yes"
else
    puts "No"
end
