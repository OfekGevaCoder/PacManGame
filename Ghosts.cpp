int Ghosts :: getDirection(
{
int dir= rand%4;
return dir;
}
void Ghosts::move() {
	setTextColor(color);
	location.move(this->direction);
	location.draw(figure);
}
