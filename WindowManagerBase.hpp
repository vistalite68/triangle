#pragma once

class WindowManagerBase
{
	public:
		virtual U16 AddObject(sf::Drawable *drawable, bool visible) = 0;
		virtual void SetViewCenter(sf::Vector2f center) = 0;
		virtual void SetViewRotation(float rotation) = 0;
};
