      # This file is called   force.p
      set   autoscale                        # scale axes automatically
      unset log                              # remove any log-scaling
      unset label                            # remove any previous labels
      set xtic auto                          # set xtics automatically
      set ytic auto                          # set ytics automatically
      set title "Image 1080p"
      set xlabel "Threads"
      set ylabel "SpeedUp"
      plot    "speedup1080k3.txt" using 1:2 title 'k3' with linespoints , \
            "speedup1080k5.txt" using 1:2 title 'k5' with linespoints, \
            "speedup1080k7.txt" using 1:2 title 'k7' with linespoints, \
            "speedup1080k9.txt" using 1:2 title 'k9' with linespoints, \
            "speedup1080k11.txt" using 1:2 title 'k11' with linespoints, \
            "speedup1080k13.txt" using 1:2 title 'k13' with linespoints, \
            "speedup1080k15.txt" using 1:2 title 'k15' with linespoints
