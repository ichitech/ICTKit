Pod::Spec.new do |s|

  s.name         = "ICTKit"
  s.version      = "0.3.0"
  s.summary      = "UIKit & UIFoundation Category"
  s.description  = "UIKit & UIFoundation"
  s.homepage     = "https://github.com/ngocbinh02/ICTKit"
  s.screenshots  = "https://raw.githubusercontent.com/ngocbinh02/ICTKit/master/demo.jpeg"
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { "Harry Tran" => "ngocbinh02@gmail.com" }
  s.platform     = :ios, '7.0'
  s.source       = { :git => "https://github.com/ngocbinh02/ICTKit.git", :tag => s.version.to_s }
  s.weak_frameworks = "QuartzCore", "CoreGraphics", "UIKit", "Foundation"
  s.public_header_files = "ICTKit/Core/ICTKit.framework/Version/A/Headers/*.h"
  s.source_files   = "ICTKit/*"
  s.requires_arc = true
  
end
