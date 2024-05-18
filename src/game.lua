player = Sprite.New("assets/player/image.png", 1, 1, 0);

function Breast.Draw() 
	Breast.Graphics.Draw( player );
end

function Breast.Update( dt ) 
	if Event.IsDownKey( "j" ) then
		player.position.y = player.position.y - 1 * dt;
	elseif Event.IsDownKey( "k" ) then
		player.position.y = player.position.y + 1 * dt;
	end
end