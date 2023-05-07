import ExpoModulesCore

public class TestExpoModule66: Module {
  public func definition() -> ModuleDefinition {
    Name("TestExpoModule66")

    AsyncFunction("queryTtiDurationAsync") { () -> Int64 in
      guard let performanceLogger = self.appContext?.reactBridge?.performanceLogger else {
        throw Exceptions.RuntimeLost()
      }
      return performanceLogger.duration(for: .RCTPLTTI)
    }
  }
}
