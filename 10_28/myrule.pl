color(parrot, green). % (1)
color(goldfish, red). % (2)
color(elephant, gray). % (3)
color(pig, pink). % (4)
bird(parrot). % (5)
fish(goldfish). % (6)
home(X, nest) :- bird(X). % (7)
home(X, water) :- fish(X). % (8)