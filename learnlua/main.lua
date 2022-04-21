#!/usr/bin/lua

RegisterCommand('reload', function()
	TriggerEvent('chat:addMessage', {
		color = {200, 0, 0},
		multiline = true,
		args = {'widepeepoBlanket', 'twitch.tv/exersalza'}
	})
end, false)
