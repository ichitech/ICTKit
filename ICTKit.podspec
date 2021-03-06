Pod::Spec.new do |s|

  s.name         = "ICTKit"
  s.version      = "14.0.3"
  s.summary      = "UIKit & UIFoundation"
  s.description  = "UIKit & UIFoundation Category"
  s.homepage     = "https://github.com/ichitech/ICTKit"
  s.screenshots  = "https://raw.githubusercontent.com/ichitech/ICTKit/master/demo.jpeg"
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { "Harry Tran" => "ngocbinh02@gmail.com" }
  s.platform     = :ios, '9.0'
  s.source       = { :git => "https://github.com/ichitech/ICTKit.git", :tag => s.version.to_s }
  s.weak_frameworks = "QuartzCore", "CoreGraphics", "UIKit", "Foundation", "ImageIO", "SystemConfiguration", "WebKit"
  s.vendored_framework = 'ICTKit.framework'
  s.resource     = 'ICTKit.framework/Versions/A/Resources/ICTBundle.bundle'
  s.requires_arc = true
  s.source_files = "ICTKit.framework/Versions/A/Headers/*.h"
  s.public_header_files = 'ICTKit.framework/Versions/A/Headers/*.h'

end
