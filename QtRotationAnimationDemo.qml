import QtQuick 2.8
import QtQuick.Controls 2.1

ApplicationWindow
{
	id: window
	visible: true

	width : 400
	height : 400

	Connections
	{
		target: applicationContext

		onShowWindow:
		{
			window.show()
		}
	}

	Image
	{
		anchors.centerIn: parent
		source: "./ring.png"
		RotationAnimator on rotation
		 {
			id: rotationAnimation
			loops: Animation.Infinite
			duration: 2000
			from: 0 ; to: 360

			onRunningChanged:
			{
				console.log("animation running: " + rotationAnimation.running + " " + rotationAnimation.duration + " " + rotationAnimation.loops)
			}

			onPausedChanged:
			{
				console.log("animation paused: " + rotationAnimation.running + " " + rotationAnimation.duration  + " " + rotationAnimation.loops)
			}
		}
	}
}