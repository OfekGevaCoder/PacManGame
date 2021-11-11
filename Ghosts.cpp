int Ghosts :: getDirection(
{
int dir= rand%4;
return dir;
}
void Ghosts::move() {

	location.move(this->direction);
	location.draw(figure);
}
