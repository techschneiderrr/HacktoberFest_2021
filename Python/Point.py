import math

class Point:
	zero = None
	def __init__(self, x, y):
		self.x = x
		self.y = y
	def __str__(self):
		return f"{self.x} {self.y}"
	def distance(self, point):
		if(point == 0):
			return math.sqrt(self.x**2 + self.y**2)
		dx = self.x - point.x
		dy = self.y - point.y
		return math.sqrt(self.x**2 + self.y**2)